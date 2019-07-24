/**************************************
 最多一次售卖得到最大利润
 即找到两个数使其差最大，前面的数比后面的数小
 **************************************/

//初始，第一天买入
//如果后面比买入价低，更新买入价
//第一个比买入价高的为卖出价，有更高的卖出价则更新
//比较得到最大利润
 class Solution {
    public int maxProfit(int[] prices) {
        int max = 0;
        //如果不存在价格，返回0
        if(prices.length == 0)
        	return max;
        //初始买入价为第一天价格
        int bought = prices[0];
        //循环后面每天的价格
        for(int i = 0; i < prices.length; i++) {
        	//如果比当前买入价高
        	if(prices[i] > bought) {
        		//作为卖出价
    			//计算利润，比较得到最大利润
    			max = Math.max(max, (prices[i] - bought));
        	}	
    		//否则比买入价低
    		else
    			//更新买入价
    			bought = prices[i];
        }
    	//返回最大利润
    	return max;
    }
}