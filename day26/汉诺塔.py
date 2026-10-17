def hanoi(n,A,B,C):   #hanoi(n, a, b, c) 的三个位置是固定的：起点、中转、终点。你把参数换个顺序传进去，就是在告诉下一层："从你这一层开始，哪根柱子是起点、哪根是中转、哪根是终点，变了。"
    if n==1:
        print(f"Move disk 1 from {A} to {C}.")
    else:
        hanoi(n - 1, A, C, B)  #先考虑除了最大的那些剩下的n-1个盘子把他们从A移到B，把C空出来放最大的盘子
        print(f"Move disk {n} from {A} to {C}")  #随着递推往下进行，这个地方的A,C,B的含义都不同了 
        hanoi(n - 1, B, A, C)  #再把剩下的n-1个盘子从B挪到C
message="Please input number."  
n=int(input(message))
hanoi(n,"A","B","C")


