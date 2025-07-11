#include <stdio.h>

//函数递归
// 1.存在限制条件，当满足这个限制条件的时候，递归便不再继续。

// 2.每次递归调用之后越来越接近这个限制 这是条件


//例1 输入1234  一次打印1234

// void print(int n)
// {
//     if(n > 9)//递归条件
//     {
//         print(n / 10);//第一次1234/10 = 123 > 9 ;进入第二次123  / 10 =12 ......1<9不满足递归条件了，打印    printf("%d ",n%10);，也就是完成第一次的函数print.然后依次完成，分别打印
// //然后从后往前一次进行归的操作，最后一层，，先进行12/10 =1，然后 printf(1 % 10);倒数第二层，123  /10 = 12,然后打印 12% 10 = 2,这是完成了倒数第二个的函数步骤，依次进行
//     }

//     printf("%d ",n%10);//递归函数完成的实际操作





// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     // printf("%d",n);成功获取1234
//     print(n);


//     return 0;
// }
//相信我已经大彻大悟了


//while循环
// int my_strlen(char* p)
// {
//     // int count = 0;
//     // whlie( *p != '0')// my_strlen(char *p)
//     // {
//     //     count ++;
//     //     p +=1;
//     //     // my_strlen(char* p);

//     // }
//     // return count;

//     int count = 0;
//     while( *p != '\0')
//     {
//         count++;
//         p++;

//     }
//     return count;


// }

//递归
#include <string.h>


// int my_strlen(char *p)
// {
//     if( *p != '\0') return 1 +my_strlen(p+1);//递归完成了

//     return 0;


// }
//递归完成了，也成功实现了

//下面是自己实验的部分
int my_strlen(char* p)
{
    int count = 0;
    if( *p != '\0')// my_strlen(char *p)
    {
        count ++;
        // p +=1;
        // my_strlen(p+1);
        count += my_strlen(p+1);

    }
    return count;
}
//这段代码算是递归，但是问题在于并没有将递归的结果累加起来，导致功能实现的不完善，count的值总是0 1；，结果没有调用
//做这样的修改，完全实现功能！！！！！my_strlen(p+1);
//不错
int main()
{
    char arr[] = "abcde";
    printf("%d\n",my_strlen(arr)); //打印字符串长度
    printf("%c",arr[2]);
//那么请写出strlen的模拟函数功能。

    return 0;



}
