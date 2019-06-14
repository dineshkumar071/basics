#include<bits/stdc++.h>
using namespace std;

void Merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++)    L[i] = arr[l+i];
    for (int i = 0; i < n2; i++)    R[i] = arr[m+1+i];
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
        arr[k++] = (L[i] < R[j]) ? L[i++] : R[j++];
    while (i < n1)  arr[k++] = L[i++];
    while (j < n2)  arr[k++] = R[j++];
}

void merges(int a[],int p,int q,int r)
{
  int n1,n2;
  n1=q-p+1;
  n2=r-q;
  int l[n1+1],rig[n2+1];
   for(int i=0;i<n1;i++)
   {
       l[i]=a[p+i];

   }
   for(int j=0;j<n2;j++)
   {

       rig[j]=a[q+1+j];
   }
   l[n1]=INT_MAX;
   rig[n2]=INT_MAX;
  int i=0;
  int j=0;
   for(int k=p;k<=r;k++)
   {
       if(l[i]<rig[j])
       {

       a[k]=l[i];
       i++;
       }
       else
       {
           a[k]=rig[j];
           j++;
       }
   }

}
void mergesort(int a[],int p,int r)
{
    if(p<r)
    {

    int q=(p+r)/2;
    mergesort(a,p,q);
    mergesort(a,q+1,r);
    merges(a,p,q,r);
    }

}
int main(void)
{

    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    mergesort(a,0,n-1);

    for(int i=0;i<n;i++)
    {

        cout<<a[i]<<" ";
    }
}
