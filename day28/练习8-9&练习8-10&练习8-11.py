#练习8-9：消息
def show_messages(users):
    for user in users:
        print(f"Hello {user.title()}!")
users=["zab","wxy","zjx"]
show_messages(users)
#练习8-10：发送消息
def send_messages(users,current_users):     #括号里要写两个列表，相当于初始变量
    while users:
        current_user=users.pop()
        print(f"Move {current_user.title()} to the other list.")
        current_users.append(current_user)
current_users=[]
send_messages(users,current_users)
show_messages(users)
#练习8-11：消息归档
current_users1=[]
users1=["zab","wxy","zjx"]
send_messages(users1[:],current_users1)
show_messages(users1)

