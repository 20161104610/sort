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
    int a[9];
    int b[9];
    
    printf("请输入任意10个数字：\n");
    
    i=0;
    j=0;
    m=0;
    
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<10;i++)
    {
        for(j=0;j<10-i;j++)
        {
            if(a[i]>=a[i+1])
            {
                a[i]=m;
                a[i]=a[i+1];
                a[i+1]=m;
            }
            i++;
        }
    }
    
    for(i=0;i<10;i++)
    {
        b[i]=a[i];
        printf("%d ",b[i]);
    }
    
}
