#include <iostream>
using namespace std;

int main() {

    int a[6];
//输入六位数
    for(int i=0;i<=5;i++){
        cin>>a[i];
    }

//插入排序算法
    for(int j=1;j<=5;j++){
        int i=j-1;
        int key=a[j];
        //a[i]表示的是在我左手里的牌（已经排好的牌，从1开始通过17-19行来实现左手排序好的牌）
        // a.j表示的是我右手正在抽的牌
        //此时，14行中i=j-1，i是左手中最右边的牌，也是最大牌
        while(i>=0&&a[i]>key){
            a[i+1]=a[i];//
            i=i-1;
        }//17-19行实现：
        a[i+1]=key;//插在右边
    }

//输出排序好的六位数
    for(int i=0;i<=5;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
