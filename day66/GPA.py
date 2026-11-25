def toPoint(score):
    if score >= 90:
        return 4.0
    elif score >= 85:
        return 3.7
    elif score >= 82:
        return 3.3
    elif score >= 78:
        return 3.0
    elif score >= 75:
        return 2.7
    elif score >= 72:
        return 2.3
    elif score >= 68:
        return 2.0
    elif score >= 64:
        return 1.5
    elif score >= 60:
        return 1.0
    else:
        return 0.0
sum_point = 0.0
total_credit = 0.0
with open("gpa_result.txt", "w", encoding="utf-8")as out:
    with open("scores.txt", "r", encoding="utf-8") as f:
        for line in f:
            parts = line.split()       # split() 按空白拆开 → ["Math", "92", "3.0"]
            name = parts[0]
            score = float(parts[1])
            credit = float(parts[2])
            sum_point += toPoint(score)*credit
            total_credit += credit
            out.write(name + ": " + str(toPoint(score))+ "\n")
    gpa = sum_point / total_credit
    out.write("GPA = " + str(gpa) + "\n")
print("GPA =", gpa)
#抽查题：C++ 的 while(grade >> name >> score >> credit) 一行全包，
#Python 的 line.split() 为什么还要自己 float()？
#本质区别在"谁负责类型转换"：
#C++ 的 >> 知道目标变量是 double，拆字符串的同时顺手把 "92" 转成 92.0——拆和转一起干；
#Python 的 split() 只管按空白拆开，拆出来的三块全是字符串（"Math"、"92"、"3.0"），
#它不知道也不关心哪块该当数字，所以必须我自己写 float() 把 "92" 变成 92.0。
#一句话：C++ 的 >> 是"拆+转"，Python 的 split 只"拆"不"转"，转类型是我自己的活。
