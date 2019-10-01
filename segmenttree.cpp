void build(int arr[],int index,int low, int high)
{
	if(low=-high)
		tree[val]=arr[low];
	else
	{
		int mid = (low+high)/2;
		build(arr,2*index,low,mid);
		build(arr,2*index+1,mid+1,high);
		tree[val]=tree[val*2]+tree[val*2+1];
	}

}