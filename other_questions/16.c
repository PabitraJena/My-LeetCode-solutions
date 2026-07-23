/*
Question: JUMPING FROG 

Program Description:
A frog wants to cross a river. Unfortunately, he can't jump across in a single leap. Luckily, there are n stones in the river.
The frog can jump from the near bank to stone 1 and from stone n to the far bank.  
He can also jump from stone to stone, forward and backward.
However, on each stone, a number j is written, and he must only jump exactly j stones backward or forward.
Return the minimum number of jumps to cross the river (including jumps to the first stone and from the last stone (or any other stone, if possible) to the far bank) or "-1" if it's not possible to cross the river.

Constraints:
• The frog may also reach the far bank from another stone than n if a large enough number is written on it.
• n is at least 2.

Sample Input:
5
[1, 1, 1, 1, 1]
Sample Output:
6
Explanation:
1st number is the number of stones and the 2nd is the list of stones and the number written on each stone.
First jump to stone 1 -> jump=1: number written on the stone is 1 so jump 1 stone.
Second jump to stone 2 -> jump=2: number written on the stone is 1 so jump 1 stone.
Third jump to stone 3 – jump=3: number written on the stone is 1 so jump 1 stone.
Fourth jump to stone 4 – jump=4: number written on the stone is 1 so jump 1 stone.
Fifth jump to stone 5 – jump=5: number written on the stone is 1 so jump 1 stone. Stone 5 is the last stone,
    so from there we will jump to the shore of the river.
jump=6 -> jumping from stone 5 to the shore.

Sample Input:
5
[1, 2, 1, 1, 1]
Sample Output:
5

Sample Input:
5
[1, 1, 3, 1, 1]
Sample Output:
4

Sample Input:
5
[8, 1, 1, 1, 1]
Sample Output:
2
*/