//题目描述
//小蓝要画一个 LANQIAO 图形，并把这个图形做成一个旗帜。图形的形状为一个 h×w 的矩形，其中 h 表示图形的高，w 表示图形的宽。当 h=5,w=10 时，图形如下所示：
//
//LANQIAOLAN
//ANQIAOLANQ
//NQIAOLANQI
//QIAOLANQIA
//IAOLANQIAO
//
//图形的规律是：第一行用 LANQIAO 重复填入，第二行开始，每行向左移动一个字符，用 LANQIAO 重复填入。
//
//小蓝需要把图形中的每个字母都剪出来，以粘贴到旗帜上，他想知道，给定图形的高和宽，图形中有多少个 A。
//
//输入格式
//输入的第一行包含两个正整数 h,w，用一个空格分隔。
//
//输出格式
//输出一行包含一个整数表示答案。
//
//输入输出样例

#include <bits/stdc++.h>

using namespace std;

int main(){
	int h, w;
	long long ans = 0;
	string str = "LANQIAO";
	int strIndex;
	 
	cin >> h >> w;
	for(int i = 0;i < h;++i){
		strIndex = i % 7;
		for(int j = 0;j < w;++j){
			if(strIndex >= str.size()){
				strIndex = 0;
			}
			if(str[strIndex++] == 'A'){
				ans++;
			}
		}
	}
	
	cout << ans;

	return 0;
}
