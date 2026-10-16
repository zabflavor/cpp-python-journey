def hanoi(n,A,B,C):
    if n==1:
        print(f"Move disk 1 from {A} to {C}.")
    else:
        hanoi(n - 1, A, C, B)
        print(f"Move disk {n} from {A} to {C}")
        hanoi(n - 1, B, A, C)
message="Please input number."
n=int(input(message))
hanoi(n,"A","B","C")


