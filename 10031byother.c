#include <stdio.h>
#include <stdlib.h>
#define max(a,b) a > b ? a : b
#define min(a,b) a < b ? a : b

int main ()
{
	int n,d,i,number,maxn = 0;
	int up = 1,cnt1 = 0,cnt2 = 0,tmph = 10000,tmpt = 1; // up 是-1和1的順序相關 // cnt1和cnt2分別是1和-1 // tmph是目前最前方的點 // tmpt 是目前最後方的點
	scanf("%d%d",&n,&d);
	for(i = 0 ; i < n ; i++)
	{
		scanf("%d",&number);
		if(number == 1) 
		{
			if(up == 0)// 當前一個是 -1 現在是 1
			{
				int tmp_cnt1 = cnt1;
				if(tmp_cnt1 - d > cnt2) // -1 太少 減少 1 的長度 所以head forward
				{
					tmp_cnt1 = (tmp_cnt1 - d) - cnt2;
					tmp_cnt1 = cnt1 - tmp_cnt1;
					int head = (i) - (cnt2 + tmp_cnt1);
					int tail = (i);
					tmph = head;
					tmpt = tail;
					if(tail - head > maxn)
						maxn = tail - head;
				}
				else if((tmp_cnt1 - d <= cnt2) && (cnt2 <= tmp_cnt1 + d)) // -1 剛好 所以tail forward
				{
					int head = (i) - (cnt2 + tmp_cnt1);
					int tail = (i);
					tmph = min(head,tmph);
					tmpt = max(tail,tmpt);
					if(tmpt - tmph > maxn)
						maxn = tmpt - tmph;
				}
				else // tmp_cnt1 + d < cnt2 // -1 太多 減少 -1 所以tail forward 但是不能連接到後面所以要有新的起點
				{
					tmp_cnt1 = cnt2 - (tmp_cnt1 + d); 
					int tail = (i) - tmp_cnt1;
					if(tail - tmph > maxn)
						maxn = tail - tmph;
					tmph = i;
					tmpt = i + 1;
					
				}
				cnt1 = 0;
				
			}
			cnt1++;
			up = 1;
		}
		else if (number == -1)
		{
			if(cnt1 == 0) // 當開頭都是-1
			{
				tmph = i + 1;
				tmpt = i + 1;
				continue;
			}
			if(up == 1) // 當前一個是 1 現在是 -1
			{
				cnt2 = 0;
			}
			cnt2++;
			up = 0;
		}
	}
	if(number == -1) // 最後是-1結尾
	{
		int tmp_cnt1 = cnt1;
		if(tmp_cnt1 - d > cnt2) // -1 太少 減少 1 的長度 所以head forward
		{
			tmp_cnt1 = (tmp_cnt1 - d) - cnt2;
			tmp_cnt1 = cnt1 - tmp_cnt1;
			int head = (i) - (cnt2 + tmp_cnt1);
			int tail = (i);
			tmph = head;
			tmpt = tail;
			if(tail - head > maxn)
				maxn = tail - head;
		}
		else if((tmp_cnt1 - d <= cnt2) && (cnt2 <= tmp_cnt1 + d)) // -1 剛好 所以tail forward
		{
			int head = (i) - (cnt2 + tmp_cnt1);
			int tail = (i);
			tmph = min(head,tmph);
			tmpt = max(tail,tmpt);
			if(tmpt - tmph > maxn)
				maxn = tmpt - tmph;
		}
		else // tmp_cnt1 + d < cnt2 // -1 太多 減少 -1 所以tail forward 但是不能連接到後面所以要有新的起點
		{
			tmp_cnt1 = cnt2 - (tmp_cnt1 + d); 
			int tail = (i) - tmp_cnt1;
			if(tail - tmph > maxn)
				maxn = tail - tmph;
			tmph = i;
			tmpt = i + 1;		
		}
	}
	
	printf("%d",maxn);
	return 0;
}