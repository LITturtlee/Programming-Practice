class Soultion_215{
    public int partition(int[] a, int r, int l){
        int x = a[r];
        int i = l - 1;
        for(int j = l; j < r ; j++){
            if(a[j]<x){
                swap(a,++i,j);
            }
        }
        swap(a,i+1,r);
        return i+1;
    }
    public void swap(int[] a, int idx1, int idx2){
        int temp = a[idx1];
        a[idx1] = a[idx2];
        a[idx2] = temp;
    }
    public static void main(String[] args){
        Soultion_215 soultion = new Soultion_215();
        int[] nums = {3,2,1,5,6,4};
        int res = soultion.partition(nums,0,5);
        System.out.println(res);
    }
}