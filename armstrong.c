#include<stdio.h>

int order(int n){ //Returns the no. of digit in a given no.

     int i;
           for( i=0; n != 0;i++)
             {n = n/10;}
     return i;
}

int power(int i, int n){ //Return value of i^n
    int number  = i;
 if( n== 0){
     return 1;
 }
  else{
    for (int j = 1; j != n ;j++){
         number = number*i;
    }
  }
  return number;
}

int armstrong(int n) { //Returns 1 if a given no. is armstrong
    int i = order(n);
    int j;
    int sum = 0;
    int x;
      for ( j = n;j!=0; j = j / 10) {
        int r = j % 10;
        sum += power(r, i);
    }
    if( sum == n){
        return 1;
    }
    else {
        return 0;
    }
}




int main() {
    int i,j,k,n;
    printf("Enter the value of n: ");
    scanf("%d" ,&n);
     i = order (n);  
    int smallestNo = 1;
    printf("Following are the armstrong number between 1 and %d: ",n);
    for (;smallestNo<=n;smallestNo++){
        if (armstrong(smallestNo) == 1){
            printf("%d " ,smallestNo);
        }
    }
}