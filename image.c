#include <stdio.h>
#include<stdlib.h>
#include"image_processing.h"
#define MAX_VALUE 255


void RGB_TO_GRAY(char *filename)
{
	FILE *fin=fopen(filename,"r");
	FILE *fout=fopen("rgb_gray.bmp","w+");

	unsigned char byte[54];
	
	if(fin==NULL)
	{
		printf("File not found");
	}

	for(int i=0;i<54; i++)
	{
		byte[i]=getc(fin);
	}

	fwrite(byte,sizeof(unsigned char), 54, fout);

	// extract image height, width and bitDepth from imageHeader 
	int height = *(int*)&byte[18];
	int width = *(int*)&byte[22];
	int bitDepth = *(int*)&byte[28];

	int size = height*width;									//calculate image size

	unsigned char buffer[size][3];								//to store the image data
	
			
	for(int i=0;i<size;i++)											//RGB to gray
	{
		int y=0;
		buffer[i][2]=getc(fin);									//blue
		buffer[i][1]=getc(fin);									//green
		buffer[i][0]=getc(fin);									//red
			
		y=(buffer[i][0]*0.3) + (buffer[i][1]*0.59)	+ (buffer[i][2]*0.11);			//conversion formula of rgb to gray

		putc(y,fout);
		putc(y,fout);
		putc(y,fout);
	}
	
	fclose(fout);
	fclose(fin);

}


void RGB_TO_NEGATIVE(char *filename)
{
	
	FILE* fp = fopen(filename, "rb");   

	unsigned char *imageData; 
	unsigned char *newimageData; // i.e. the negative image
    unsigned char imageHeader[54]; 
    unsigned char colorTable[1024]; // to get the colortable

	int i,j; 

	fread(imageHeader, sizeof(unsigned char), 54, fp); 
	      
	  
	// extract image height and width from imageHeader      
        int width = *(int*)&imageHeader[18];
        int height = *(int*)&imageHeader[22];
	int bitDepth = *(int*)&imageHeader[28];

        int imgDataSize = width * height; // calculate image size

        imageData = (unsigned char*)malloc (imgDataSize * sizeof(unsigned char)); 
        newimageData = (unsigned char*)malloc (imgDataSize * sizeof(unsigned char));
	
	if(bitDepth <= 8)	
		fread(colorTable, sizeof(unsigned char), 1024, fp); 
		
	
	fread( imageData, sizeof(unsigned char), imgDataSize, fp);
	   
		
	//Calculate the mean of the image
	for(i = 0; i < height; i++){
	      for(j = 0; j < width; j++){                   
		     newimageData[i*width + j] = 255 - imageData[i*width + j]; 
		 }   
	}

	FILE *fo = fopen("rgb_negative.bmp", "wb");

        fwrite(imageHeader, sizeof(unsigned char), 54, fo); 

	if(bitDepth <= 8)	// COLOR TABLE Present
        	fwrite(colorTable, sizeof(unsigned char), 1024, fo); 
	
        fwrite( newimageData, sizeof(unsigned char), imgDataSize, fo);

        fclose(fo);
	fclose(fp);
        
}


void RGB_TO_SEPIA(char *filename)
{
	FILE *fIn = fopen(filename,"r");					
	FILE *fOut = fopen("rgb_sepia","w+");		    		

	int i,r,g,b;
	unsigned char byte[54];
	
	if(fIn==NULL)							
	{											
		printf("File does not exist.\n");
	}

	for(i=0;i<54;i++)						
	{									
		byte[i] = getc(fIn);								
	}

	fwrite(byte,sizeof(unsigned char),54,fOut);					

	// extract image height, width and bitDepth from imageHeader 
	int height = *(int*)&byte[18];
	int width = *(int*)&byte[22];
	int bitDepth = *(int*)&byte[28];

	

	int size = height*width;									

	unsigned char buffer[size][3];								

	for(i=0;i<size;i++){
		r = 0;
		g = 0;
		b = 0;
		buffer[i][2] = getc(fIn);									//blue
		buffer[i][1] = getc(fIn);									//green
		buffer[i][0] = getc(fIn);									//red

		//conversion formula of rgb to sepia
		r = (buffer[i][0]*0.393) + (buffer[i][1]*0.769)	+ (buffer[i][2]*0.189);
		g = (buffer[i][0]*0.349) + (buffer[i][1]*0.686)	+ (buffer[i][2]*0.168);
		b = (buffer[i][0]*0.272) + (buffer[i][1]*0.534)	+ (buffer[i][2]*0.131);

		if(r > MAX_VALUE){											//if value exceeds
			r = MAX_VALUE;
		}
		if(g > MAX_VALUE){
			g = MAX_VALUE;
		}
		if(b > MAX_VALUE){
			b = MAX_VALUE;
		}
		putc(b,fOut);
		putc(g,fOut);
		putc(r,fOut);
		
	}
	
		
	fclose(fOut);
	fclose(fIn);
}


void image_to_array(char *filename, int *arr)
{
	
	FILE *fp=fopen(filename,"r");

	
	unsigned char byte1[54];

	for(int i1=0;i1<54; i1++){
		byte1[i1]=getc(fp);
	}

	

	int height1 = *(int*)&byte1[18];
	int width1 = *(int*)&byte1[22];
	int size=height1*width1;


	unsigned char buffer1[height1][width1];
	fread(buffer1,sizeof(unsigned char),size,fp);


	// arr[256];
	int c1=0;
	for(int i=0; i<16; i++)
	{
		for(int j=0; j<16; j++)
		{
			int avg=0;
			for(int i1=32*i; i1< 32*i+32; i1++){
				for(int j1=32*j; j1<32*j+32; j1++){
					avg+=buffer1[i1][j1];
				}
			}
			arr[c1]=avg/1024;
			c1++;
			
		}
	}

	return ;
}



void copy_image(char *file1, char *file2){
	FILE *fo = fopen(file2,"wb"); // Output File name

	int i;

	FILE *streamIn; 
        streamIn = fopen(file1, "r"); // Input file name
   
        if (streamIn == (FILE *)0) // check if the input file has not been opened succesfully.
	{
            printf("File opening error ocurred. Exiting program.\n");
            exit(0);
 	}

 	unsigned char header[54]; // to store the image header
	unsigned char colorTable[1024]; // to store the colorTable, if it exists.
	
 	int count = 0;
 	for(i=0;i<54;i++) 
 	{
 		header[i] = getc(streamIn);  // strip out BMP header
 		
 	}
 	int width = *(int*)&header[18]; // read the width from the image header
 	int height = *(int*)&header[22]; // read the height from the image header
	int bitDepth = *(int*)&header[28]; // read the bitDepth from the image header

	if(bitDepth <= 8)
		fread(colorTable, sizeof(unsigned char), 1024, streamIn);


	

	fwrite(header, sizeof(unsigned char), 54, fo); // write the image header to output file
  	
 	unsigned char buf[height * width*3]; // to store the image data

	fread(buf, sizeof(unsigned char), (height * width*3), streamIn);
	
	if(bitDepth <= 8)
		fwrite(colorTable, sizeof(unsigned char), 1024, fo);	

	fwrite(buf, sizeof(unsigned char), (height * width*3), fo);
 	
	fclose(fo);
 	fclose(streamIn);
}










// int main()
// {
// 	int arr[256];							
// 	RGB_TO_GRAY("images/NB0011.bmp");
// 	image_to_array("rgb_gray.bmp",arr);

// 	for(int i=0; i<256; i++){
// 		printf("%d ",arr[i]);
// 	}
	
// }