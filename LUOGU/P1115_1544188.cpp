#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int x,now=-9999999,ans=-9999999,i,n;   //now表示到当前位置的最大子段和
int max(int a,int b)
{
    return(a>b? a:b);
}
int main()
{
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        scanf("%d",&x);
        now=max(x,now+x);   //很显然只有当前面的和大于0时 才把当前x加上前面
        ans=max(now,ans);   //更新ans
    }
    printf("%d",ans);
    return 0;
}