#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <ctype.h>
#include <assert.h>
#include <sys/time.h>
#include <time.h>
#include "kdtree.h"
#include"image_processing.h"

int main(){
    
    struct kdtree *kd; 
    struct kdres *set;

    kd=kd_create(256);
    

    // char name[]="images/NB0000.bmp";
    // int arr[256];

    // int i=1;
    // while(i<40){
    //     if(i<10){
    //         name[12]=i+'0';
    //     }
    //     else{
    //         name[11]=(i/10)+'0';
    //         name[12]=(i%10)+'0';
    //     }
    //     RGB_TO_GRAY(name);
    //     image_to_array("rgb_gray.bmp",arr);
    //     kd_insert(kd,arr,name);
    //     // printf("%s\n",kd->root->filename);
    //     printf("%s\n",name);
    //     i++;
    // }

    // char name[]="images/NB0001.bmp";
    // int arr[256];
    // RGB_TO_GRAY(name);
    // image_to_array("rgb_gray.bmp",arr);
    // kd_insert(kd,arr,name);
    
    // for(int i=2;i<40;i++){
    //     if(i<10){
    //         name[12]=i+'0';
    //     }
    //     else{
    //         name[11]=(i/10)+'0';
    //         name[12]=(i%10)+'0';
    //     }
    //     // printf("%s\n", name);
    //     RGB_TO_GRAY(name);
    //     image_to_array("rgb_gray.bmp",arr);
    //     kd_insert(kd,arr,name);
    //     // printf("%s inserted\n",name);
    //     printf("%s\n",kd->root->filename);
    // }
    // printf("\n");







    int arr[256];
    RGB_TO_GRAY("images/NB0001.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0001.bmp");
    printf("NB0001.bmp inserted\n");
    RGB_TO_GRAY("images/NB0002.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0002.bmp");
    printf("NB0002.bmp inserted\n");
    RGB_TO_GRAY("images/NB0003.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0003.bmp");
    printf("NB0003.bmp inserted\n");
    RGB_TO_GRAY("images/NB0004.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0004.bmp");
    printf("NB0004.bmp inserted\n");
    RGB_TO_GRAY("images/NB0005.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0005.bmp");
    printf("NB0005.bmp inserted\n");
    RGB_TO_GRAY("images/NB0006.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0006.bmp");
    printf("NB0006.bmp inserted\n");
    RGB_TO_GRAY("images/NB0007.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0007.bmp");
    printf("NB0007.bmp inserted\n");
    RGB_TO_GRAY("images/NB0008.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0008.bmp");
    printf("NB0008.bmp inserted\n");
    RGB_TO_GRAY("images/NB0009.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0009.bmp");
    printf("NB0009.bmp inserted\n");
    RGB_TO_GRAY("images/NB0010.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0010.bmp");
    printf("NB0010.bmp inserted\n");
    RGB_TO_GRAY("images/NB0011.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0011.bmp");
    printf("NB0011.bmp inserted\n");
    RGB_TO_GRAY("images/NB0012.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0012.bmp");
    printf("NB0012.bmp inserted\n");
    RGB_TO_GRAY("images/NB0013.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0013.bmp");
    printf("NB0013.bmp inserted\n");
    RGB_TO_GRAY("images/NB0014.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0014.bmp");
    printf("NB0014.bmp inserted\n");
    RGB_TO_GRAY("images/NB0015.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0015.bmp");
    printf("NB0015.bmp inserted\n");
    RGB_TO_GRAY("images/NB0016.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0016.bmp");
    printf("NB0016.bmp inserted\n");
    RGB_TO_GRAY("images/NB0017.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0017.bmp");
    printf("NB0017.bmp inserted\n");
    RGB_TO_GRAY("images/NB0018.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0018.bmp");
    printf("NB0018.bmp inserted\n");
    RGB_TO_GRAY("images/NB0019.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0019.bmp");
    printf("NB0019.bmp inserted\n");
    RGB_TO_GRAY("images/NB0020.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0020.bmp");
    printf("NB0020.bmp inserted\n");
    RGB_TO_GRAY("images/NB0021.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0021.bmp");
    printf("NB0021.bmp inserted\n");
    RGB_TO_GRAY("images/NB0022.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0022.bmp");
    printf("NB0022.bmp inserted\n");
    RGB_TO_GRAY("images/NB0023.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0023.bmp");
    printf("NB0023.bmp inserted\n");
    RGB_TO_GRAY("images/NB0024.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0024.bmp");
    printf("NB0024.bmp inserted\n");
    RGB_TO_GRAY("images/NB0025.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0025.bmp");
    printf("NB0025.bmp inserted\n");
    RGB_TO_GRAY("images/NB0026.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0026.bmp");
    printf("NB0026.bmp inserted\n");
    RGB_TO_GRAY("images/NB0027.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0027.bmp");
    printf("NB0027.bmp inserted\n");
    RGB_TO_GRAY("images/NB0028.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0028.bmp");
    printf("NB0028.bmp inserted\n");
    RGB_TO_GRAY("images/NB0029.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0029.bmp");
    printf("NB0029.bmp inserted\n");
    RGB_TO_GRAY("images/NB0030.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0030.bmp");
    printf("NB0030.bmp inserted\n");
    RGB_TO_GRAY("images/NB0031.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0031.bmp");
    printf("NB0031.bmp inserted\n");
    RGB_TO_GRAY("images/NB0032.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0032.bmp");
    printf("NB0032.bmp inserted\n");
    RGB_TO_GRAY("images/NB0033.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0033.bmp");
    printf("NB0033.bmp inserted\n");
    RGB_TO_GRAY("images/NB0034.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0034.bmp");
    printf("NB0034.bmp inserted\n");
    RGB_TO_GRAY("images/NB0035.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0035.bmp");
    printf("NB0035.bmp inserted\n");
    RGB_TO_GRAY("images/NB0036.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0036.bmp");
    printf("NB0036.bmp inserted\n");
    RGB_TO_GRAY("images/NB0037.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0037.bmp");
    printf("NB0037.bmp inserted\n");
    RGB_TO_GRAY("images/NB0038.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0038.bmp");
    printf("NB0038.bmp inserted\n");
    RGB_TO_GRAY("images/NB0039.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0039.bmp");
    printf("NB0039.bmp inserted\n");
    RGB_TO_GRAY("images/NB0040.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0040.bmp");
    printf("NB0040.bmp inserted\n");
    RGB_TO_GRAY("images/NB0041.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0041.bmp");
    printf("NB0041.bmp inserted\n");
    RGB_TO_GRAY("images/NB0042.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0042.bmp");
    printf("NB0042.bmp inserted\n");
    RGB_TO_GRAY("images/NB0043.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0043.bmp");
    printf("NB0043.bmp inserted\n");
    RGB_TO_GRAY("images/NB0044.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0044.bmp");
    printf("NB0044.bmp inserted\n");
    RGB_TO_GRAY("images/NB0045.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0045.bmp");
    printf("NB0045.bmp inserted\n");
    RGB_TO_GRAY("images/NB0046.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0046.bmp");
    printf("NB0046.bmp inserted\n");
    RGB_TO_GRAY("images/NB0047.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0047.bmp");
    printf("NB0047.bmp inserted\n");
    RGB_TO_GRAY("images/NB0048.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0048.bmp");
    printf("NB0048.bmp inserted\n");
    RGB_TO_GRAY("images/NB0049.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0049.bmp");
    printf("NB0049.bmp inserted\n");
    RGB_TO_GRAY("images/NB0050.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0050.bmp");
    printf("NB0050.bmp inserted\n");
    RGB_TO_GRAY("images/NB0051.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0051.bmp");
    printf("NB0051.bmp inserted\n");
    RGB_TO_GRAY("images/NB0052.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0052.bmp");
    printf("NB0052.bmp inserted\n");
    RGB_TO_GRAY("images/NB0053.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0053.bmp");
    printf("NB0053.bmp inserted\n");
    RGB_TO_GRAY("images/NB0054.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0054.bmp");
    printf("NB0054.bmp inserted\n");
    RGB_TO_GRAY("images/NB0055.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0055.bmp");
    printf("NB0055.bmp inserted\n");
    RGB_TO_GRAY("images/NB0056.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0056.bmp");
    printf("NB0056.bmp inserted\n");
    RGB_TO_GRAY("images/NB0057.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0057.bmp");
    printf("NB0057.bmp inserted\n");
    RGB_TO_GRAY("images/NB0058.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0058.bmp");
    printf("NB0058.bmp inserted\n");
    RGB_TO_GRAY("images/NB0059.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0059.bmp");
    printf("NB0059.bmp inserted\n");
    RGB_TO_GRAY("images/NB0060.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0060.bmp");
    printf("NB0060.bmp inserted\n");
    RGB_TO_GRAY("images/NB0061.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0061.bmp");
    printf("NB0061.bmp inserted\n");
    RGB_TO_GRAY("images/NB0062.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0062.bmp");
    printf("NB0062.bmp inserted\n");
    RGB_TO_GRAY("images/NB0063.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0063.bmp");
    printf("NB0063.bmp inserted\n");
    RGB_TO_GRAY("images/NB0064.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0064.bmp");
    printf("NB0064.bmp inserted\n");
    RGB_TO_GRAY("images/NB0065.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0065.bmp");
    printf("NB0065.bmp inserted\n");
    RGB_TO_GRAY("images/NB0066.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0066.bmp");
    printf("NB0066.bmp inserted\n");
    RGB_TO_GRAY("images/NB0067.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0067.bmp");
    printf("NB0067.bmp inserted\n");
    RGB_TO_GRAY("images/NB0068.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0068.bmp");
    printf("NB0068.bmp inserted\n");
    RGB_TO_GRAY("images/NB0069.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0069.bmp");
    printf("NB0069.bmp inserted\n");
    RGB_TO_GRAY("images/NB0070.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0070.bmp");
    printf("NB0070.bmp inserted\n");
    RGB_TO_GRAY("images/NB0071.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0071.bmp");
    printf("NB0071.bmp inserted\n");
    RGB_TO_GRAY("images/NB0072.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0072.bmp");
    printf("NB0072.bmp inserted\n");
    RGB_TO_GRAY("images/NB0073.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0073.bmp");
    printf("NB0073.bmp inserted\n");
    RGB_TO_GRAY("images/NB0074.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0074.bmp");
    printf("NB0074.bmp inserted\n");
    RGB_TO_GRAY("images/NB0075.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0075.bmp");
    printf("NB0075.bmp inserted\n");
    RGB_TO_GRAY("images/NB0076.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0076.bmp");
    printf("NB0076.bmp inserted\n");
    RGB_TO_GRAY("images/NB0077.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0077.bmp");
    printf("NB0077.bmp inserted\n");
    RGB_TO_GRAY("images/NB0078.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0078.bmp");
    printf("NB0078.bmp inserted\n");
    RGB_TO_GRAY("images/NB0079.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0079.bmp");
    printf("NB0079.bmp inserted\n");
    RGB_TO_GRAY("images/NB0080.bmp");
    image_to_array("rgb_gray.bmp",arr);
    kd_insert(kd,arr,"images/NB0080.bmp");
    printf("NB0080.bmp inserted\n");






    char query[20];
    float range;
    int q[256];
    int pos[256];
    int i=1;
    while(i){
        printf("--------------------------------------\n");
        printf("1.Search for image.\n");
        printf("2.Delete result files.\n");
        printf("3.Exit..\n");
        int i1;
        scanf("%d",&i);
        if(i==1){
            printf("Enter query name -  \n");
            scanf("%s",query);
            printf("Enter range for searching  ");
            scanf("%f",&range);
            RGB_TO_GRAY(query);
            image_to_array("rgb_gray.bmp",q);
            set=kd_nearest_range(kd,q,range);
            if(kd_res_size(set)==0){
                printf("No match found\n");
            }
            i1=1;
            char ans[]="Result00.bmp";
            while(!kd_res_end(set)){
                char *pch=(char*)kd_res_item(set,pos);
                // printf("%s\n",pch);
                if(i1<10){
                    ans[7]=(i1%10)+'0';
                }
                else{
                    ans[6]=(i1/10)+'0';
                    ans[7]=(i1%10)+'0';
                }
                copy_image(pch,ans);
                kd_res_next(set);
                i1++;
            }
        }
        else if(i==2){
            char name[]="Result00.bmp";
            for(int j=1; j<=i1;j++){
                if(i1<10){
                    name[7]=(j%10)+'0';
                }
                else{
                    name[6]=(j/10)+'0';
                    name[7]=(j%10)+'0';
                }
                    remove(name);
            }
        }
        else{
            printf("Exited..\n");
            i=0;
        }
        

        

    
    }
    
    // kd_res_free(set);

	// kd_free(kd);

}