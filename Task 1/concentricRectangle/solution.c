#include<stdio.h>
#include<stdlib.h>
struct point
{
    int xCoord,yCoord;
};

struct rectangle{

    struct point lowerLeft;
    struct point upperRight;
    
};
 
struct rectangle* getRectangle(){
   struct rectangle* localR;
  //enter your code here to malloc and initialize the memory.
  localR= (struct rectangle *) malloc (sizeof (struct rectangle));
   scanf("%d",&((*localR).lowerLeft.xCoord));
   scanf("%d",&((*localR).lowerLeft.yCoord));
   scanf("%d",&((*localR).upperRight.xCoord));
   scanf("%d",&((*localR).upperRight.yCoord));
   return localR;
}
void displayRectangles(struct rectangle r){
    
  //enter your code for displayRectangles.
   r.lowerLeft.xCoord +=1;
    r.lowerLeft.yCoord +=1;
    r.upperRight.xCoord -=1;
    r.upperRight.yCoord -=1;
  while((r.lowerLeft.xCoord < r.upperRight.xCoord) && (r.lowerLeft.yCoord < r.upperRight.yCoord) ){
    printf("%d %d %d %d\n",r.lowerLeft.xCoord,r.lowerLeft.yCoord,r.upperRight.xCoord,r.upperRight.yCoord);
    r.lowerLeft.xCoord +=1;
    r.lowerLeft.yCoord +=1;
    r.upperRight.xCoord -=1;
    r.upperRight.yCoord -=1;
    
  }
}

int main(void) {
    struct rectangle* rptr;
       
    rptr = getRectangle();
    
    displayRectangles(*rptr);
   
    return 0;
}