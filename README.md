# Image retrieval using KD-Tree

<p>Implementation of IEEE research paper which is based on algorithm for faster searching of multidimensional data</p> 

<p><b>Data structure used</b> - kd tree is a space-partitioning data structure for organizing points in a k-dimensional space, useful data structure for search involving multidimensional search keys</P>


### Algorithm - 
<b>Insertion of images in tree </b>
<ol>
<li> Reading of bmp image and converting it to gray scale image using image processing</li>
<li> Use of average pooling method for reduction of 512*512 image to 16*16 grid with minimal losses </li>
<li> Insertion in KD tree as 256 dimensional data using KD tree insertion algorithm </li>
</ol>
<br> 

<b> Searching of image from dataset </b>
<ol>
<li> Same process on query image for dimension reduction </li>
<li> Using KD tree nearest neighbour search algorithm nearest matching image is retrieved. </li>
<li> Based on given range image with most similarity is searched </li>
</ol>





