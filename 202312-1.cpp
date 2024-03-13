#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	vector< vector<int> > arr(n,vector<int>(m));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<n;i++){
		bool flag=false;
		for(int y=0;y<n;y++){
			if(i!=y){
				int time=0;	
				for(int j=0;j<m;j++){
					if(arr[y][j]>arr[i][j]){
						time++;
						
					}
				}
				if(time==m){
					cout<<y+1<<endl;
					flag = true;	
					break;	
				}	
			}
		}
		if(!flag){
			cout<<0<<endl;
		}
	}
	return 0;
}