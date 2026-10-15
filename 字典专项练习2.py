d={"语文":88,'数学':92,'英语':79}
for subject in d:
    print(subject)
for grade in d.values():
    print(grade)
for subject,grade in d.items():
    print(f"Subject:{subject}")
    print(f"Grade:{grade}")
for k in d:
    print(f"Subject:{k}")
    print(f"Grade:{d[k]}")
total=0
for subject in d:
    total=d[subject]+total
print(total)
