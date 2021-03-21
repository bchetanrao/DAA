#include<bits/stdc++.h>
using namespace std;

int max(int a,int b){
    return (a<b)?b:a;
}
int isFeasible(int mid, int a[], int n, int k)
{
	int pos = a[0];
	int elements = 1;
	for (int i = 1; i < n; i++) {
		if (a[i] - pos >= mid) {
			pos = a[i];
			elements++;
			if (elements == k)
				return 1;
		}
	}
	return 0;
}
int largestMinimumDistance(int a[], int n, int k)
{
	sort(a,a+n);
	int result = -1;
	int left = 1;
	int right = a[n - 1];
	while (left<right) {
		int mid =(left + right)/2;
		if (isFeasible(mid,a,n,k)) {
			result = max(result, mid);
			left = mid + 1;
		}
		else
			right = mid-1;
	}

	return result;
}
int main()
{
    int n,k,i;
    printf("Please enter the size of array :-\n");
    cin >> n;
    int a[n];
    printf("Please enter the array :-\n");
    for(i=0;i<n;i++){
       cin >> a[i];
    }
    printf("Please enter the value of k :-\n");
    cin >> k;
    int result= largestMinimumDistance(a,n,k);
	cout << "Largest minimum distance "<< result;
	return 0;
}
