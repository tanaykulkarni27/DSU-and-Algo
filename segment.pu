class NumArray:

    def __init__(self, nums: List[int]):
        self.n = len(nums)
        self.arr = nums
        x = 1
        while(1<<x<self.n):
            self.arr.append(0)
            x+=1
        self.n = 1<<x
        self.tree = [0 for i in range(self.n*2)]
        for i in range(len(nums)):
            self.tree[i+self.n] = self.arr[i]
        for i in range(self.n-1,0,-1):
            self.tree[i] = self.tree[i*2]+self.tree[i*2+1]
        print(self.tree)
    def updt(self,i,node_low,node_high,qlow,qhigh,new_val):
        if qlow == node_low == qhigh == node_high:
            self.tree[i] = int(new_val)
            return
        if qlow>node_high or qhigh<node_low:
            return 0
        mid = (node_low+node_high)/2
        self.updt(i*2,node_low,mid,qlow,qhigh,new_val)
        self.updt(i*2+1,mid+1,node_high,qlow,qhigh,new_val)
        self.tree[i] = self.tree[i*2]+self.tree[i*2+1]
    def update(self, i: int, val: int) -> None:
            self.tree[i+self.n] = val
            pos = i+self.n
            while (pos/2)>0:
                left = pos
                right = pos
                if left % 2 == 0:
                    right+=1
                else:
                    left-=1
                self.tree[pos//2] = self.tree[left]+self.tree[right];
                pos//=2
    def sumrange(self,i,node_low,node_high,qlow,qhigh):
        if qlow<=node_low and qhigh>=node_high:
            return self.tree[i]
        if qlow>node_high or qhigh<node_low:
            return 0
        mid = (node_high+node_low)//2
        return self.sumrange(i*2,node_low,mid,qlow,qhigh)+self.sumrange(i*2+1,mid+1,node_high,qlow,qhigh);
        
    def sumRange(self, left: int, right: int) -> int:        
        return self.sumrange(1,0,self.n-1,left,right)


# Your NumArray object will be instantiated and called as such:
# obj = NumArray(nums)
# obj.update(index,val)
# param_2 = obj.sumRange(left,right)
