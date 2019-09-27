void sort_in_place(int &x, int &y, int &z)
{
 if (x > y){
   int temp =y;
   y=x;
   x=temp;
 }
if (y > z) {
   int temp =z;
   z=y;
   y=temp;
}
if (x > y){
    int temp =y;
    y=x;
    x=temp;
 }
}