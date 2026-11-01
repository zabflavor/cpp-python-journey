from datetime import datetime

now = datetime.now()

print("1. 现在这一刻：", now)
print("2. 八位日期：", now.strftime("%Y%m%d"))
print("3. 带横杠的日期：", now.strftime("%Y-%m-%d"))
