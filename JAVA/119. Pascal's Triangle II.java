/**************************************
 杨辉三角形
 输入第几行，返回该行数组，行从0开始
 **************************************/

//O(k)空间复杂度
//计算当前层只需要上一层，不断替换上层数组
class Solution {
    public List<Integer> getRow(int rowIndex) {
		ArrayList<Integer> last = new ArrayList<Integer>();
		last.add(1);
		if(rowIndex == 0)
			return last;
		for(int i = 1; i <= rowIndex; i++) {
			ArrayList<Integer> tmp = new ArrayList<Integer>();
			tmp.add(1);
			for(int j = 1; j < i; j++) {
				tmp.add(last.get(j) + last.get(j - 1));
			}
			tmp.add(1);
			last = tmp;
		}    
		return last;    
    }
}