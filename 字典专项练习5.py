students={
    "小明":{"语文":88,"数学":92,"英语":79},
    "小红":{"语文":95,"数学":87,"英语":90}
}
for name, grades in students.items():
    best_score   =-1
    best_subject =0
    for subject, score in grades.items():
        if grades[subject]>best_score:
            best_score   = grades[subject]
            best_subject = subject
    print(f"{name}分数最高的科目是:{best_subject}")