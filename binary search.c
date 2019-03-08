#include<stdio.h>
 int main()
{
  int arr[20],n,search,first,last,mid,i:
  printf("Enter the number of elements");
  scanf("%d",&n);
  printf("Enter the array element");
  for(i=0;i<n;i++)
  {
  scanf("%d",&arr[i]);
  }
  printf("Enter the search elements");
  scanf("%d",&search);
  first=0;
  last=n-1;
  mid=(first+last)/2;
  while(first<last)
{
  if(arr[mid]<search)
{
  first=mid+1;
}
  else if(arr[mid]==search)
{
  printf("%d found at location %d/n",search,mid+1);
  break;
}
  else
{
    last=mid-1;
    mid=(first+last)/2;
}
    if(first>last)
{
  printf("not found /n",search);
  return 0;
}
}
}



