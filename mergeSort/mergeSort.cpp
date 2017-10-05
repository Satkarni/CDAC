#include <iostream>

#define SIZE 10 

    template <class T>
void print(T* arr,const int n)
{
    std::cout << std::endl;
    for(int i=0;i<n;i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

    template <class T>
void merge(T *initList,T *mergedList,const int l,const int m,const int n)
{
    int i1,im,i2;
    for( i1 = l,im = l,i2=m+1;
            i1 <= m && i2 <= n;
            im++)
    {
        if(initList[i1] <= initList[i2])    //if list1 member < list 2 member put it in mergedlist
        {
            mergedList[im] = initList[i1];
            i1++;
        }else
        {
            mergedList[im] = initList[i2];
            i2++;
        }
    }

    //now copy over remaining from list1 if any left
    for(int j=i1;j<=m;j++,im++)
    {
        mergedList[im] = initList[j];
    }
    //now copy over remaining from list2 if any left
    for(int j=i2;j<=n;j++,im++)
    {
        mergedList[im] = initList[j];
    }
}

    template <class T>
void mergePass(T* init,T* out,const int n,const int size)
{
    int i;
    for( i=0;i <= n-2*size+1;i += 2*size)
    {
        merge(init,out,i,i+size-1,i+2*size-1);
        print(out,n);
        std::cout << "size=\t" << size*2;
    }

    if((i+size-1) < n)
    {
        std::cout << "\ni="<<i<<"\n";
        merge(init,out,i,i+size-1,n-1);
    }
    else{
        std::cout << "\ni="<<i<<"\n";
        std::copy(init+i,init+n+1,out+i);
    }

}
    template <class T>
void mergeSort(T* a,const int n)
{
    T* tmp = new T[n+1];
    for(int length=1;length < n;length *= 2)
    {
        mergePass(a,tmp,n,length);
        length *= 2;
        mergePass(tmp,a,n,length);
    }

    delete [] tmp;
}
int main()
{
    int a[] = {26,5,77,1,619,11,59,15,48,19};

    print(a,SIZE);
    mergeSort(a,SIZE);
    print(a,SIZE);

    return 0;
}
