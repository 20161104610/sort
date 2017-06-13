//
//  main.c
//  sort
//
//  Created by 20161104610 on 17/6/12.
//  Copyright © 2017年 20161104610. All rights reserved.
//

#include <stdio.h>

int main()
{
    int i;
    int j;
    int m;
    int n;
    int k;
    int a[9];
    int b[10];
    
    FILE *fr;
    FILE *fw;
    
    fr=fopen("/Users/a201611046101/Desktop/sort/sort.txt","r+");
    fw=fopen("/Users/a201611046101/Desktop/sort/output.txt","w");

    i=0;
    j=0;
    m=0;
    n=0;
    k=0;
    
    printf("请输入任意10个数字：\n");
    
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        fprintf(fr,"%d ",a[i]);
    }
    
    for(i=0;i<10;i++)
    {
        b[i]=a[i];
    }
    
    n=b[0];
    
    for(i=0;i<10;i++)
    {
        for(j=0;j<10-i;j++)
        {
            if(b[j]>=b[j+1])
            {
                m=b[j];
                b[j]=b[j+1];
                b[j+1]=m;
            }
        }
    }

    for(i=0;i<10;i++)
    {
        a[i]=b[i+1];
        printf("%d ",a[i]);
        fprintf(fw,"%d ",a[i]);
    }
    
    printf("\n");
    
}
