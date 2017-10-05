#include <bits/stdc++.h>
using namespace std;
long long int  ar[1000007];
long long int segt[4000050];


void build_segtree(int st,int end,int node){
	if(end==st){
		segt[node]=ar[st];
	}
	else{
		int m=(int)(st+end)/2;
		build_segtree(st,m,2*node);
		build_segtree(m+1,end,2*node+1);
		segt[node]=segt[2*node]+segt[2*node+1];
	}
}

void update_segt(int st,int end ,int node,int val ,int index)
{
	if(st==end)
	{
		ar[index]=ar[index]+val;
		segt[node]=segt[node]+val;
	}
	else
	{
		int m=(int)(st+end)/2;
		if(index>=st && index<=m){
			update_segt(st,m,2*node,val,index);
		}
		else{
			update_segt(m+1,end,2*node+1,val,index);
		}
		segt[node]=segt[2*node]+segt[2*node+1];
	}
}

long long int query(int st,int end,int node,int left,int right){
	if(left>end||right<st){
		return 0;
	}

	else if(left<=st && right>=end){
		return segt[node];
	}

	else{
		int m=(int)(st+end)/2;
		return (query(st,m,2*node,left,right)+query(m+1,end,2*node+1,left,right));
	}
}


int main(){
	int testcases;
	cin>>testcases;
	while(testcases--){
		long long int ans=0;
		int n;
		cin>>n;
		int c[n+5];
		for(int i=0;i<n;i++){
			cin>>c[i];
		}
		//input corresponding W and building segment tree
		for(int i=1;i<n+1;i++){
			cin>>ar[i];
		}
		build_segtree(1,n,1);
		for(int i=1;i<n;++i){

			bool re[1000007]={false};
			for(int j=i,left=i,right=i;j<n+1;++j){
				re[c[j]]=!re[c[j]];
				if(!re[c[j]])
					break;
				else{
						ans=max(query(1,n,1,left,right),ans);
						right++;
				}
			}
		}
		printf("%lld\n",ans );
	}
	return 0;
}