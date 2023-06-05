#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   int count0=0, count1=0, count2=0;
   for(int i=0;i<n;i++){
      if(arr[i]==0){
         count0++;
      } else if(arr[i]==1){
         count1++;
      } else{
         count2++;
      }
   }
   int i=0;
   while(i<count0){
      arr[i] = 0;
      i++;
   }
   int j=i;
   while(j<count1+count0){
      arr[j] = 1;
      j++;
   }
   int k = j;
   while(k<count2+count1+count0){
      arr[k]=2;
      k++;
   }
}