//Short method(if else)///////////////////////////////////
#include <stdio.h>
int main(){
//    const a = 10;
  //  (a < 20) ? printf("Yes") : printf("Noo");
//return 0;
//}

/////////////////////Case///////////////////////
const int a;
printf("Enter The date: ");
scanf("%d",&a);

switch(a){
case 1:
    printf("Monday");
    break;
case 2:
    printf("Tuesday");
    break;
case 3:
    printf("Wednesday");
    break;
case 4:
    printf("Thursday");
    break;
case 5:
    printf("Friday");
    break;
case 6:
    printf("Saturday");
    break;
case 7:
    printf("sunday");
    break;
default:
    printf("Enter the Right Num.....................");

}

return 0;
}



