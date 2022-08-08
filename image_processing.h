

// Structure of bitmap file 


// typedef struct {
//     unsigned short type;                 /* Magic identifier            */
//     unsigned int size;                       /* File size in bytes          */
//     unsigned int reserved;
//     unsigned int offset;                     /* Offset to image data, bytes */
// } HEADER;
// typedef struct {
//     unsigned int size;               /* Header size in bytes      */
//     int width,height;                /* Width and height of image */
//     unsigned short planes;       /* Number of colour planes   */
//     unsigned short bits;         /* Bits per pixel            */
//     unsigned int compression;        /* Compression type          */
//     unsigned int imagesize;          /* Image size in bytes       */
//     int xresolution,yresolution;     /* Pixels per meter          */
//     unsigned int ncolours;           /* Number of colours         */
//     unsigned int importantcolours;   /* Important colours         */
// } INFOHEADER;
// typedef struct {
//     unsigned char r,g,b,junk;
// } COLOURINDEX;



void RGB_TO_GRAY(char *filename);

void RGB_TO_NEGATIVE(char *filename);

void RGB_TO_SEPIA(char *filename);

void image_to_array(char *filename, int *arr);

void copy_image(char *file1, char *file2);