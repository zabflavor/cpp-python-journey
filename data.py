import csv
import requests
from bs4 import BeautifulSoup
f = open("D:/zab/day47/data/data.csv", "w", encoding="utf-8", newline="")
w = csv.writer(f)
w.writerow(["正文","作者","标签"])
for i in range(1,6):
    r = requests.get(url=f"https://quotes.toscrape.com/page/{i}/", timeout=5)
    if r.status_code!=200:
        print(f"第{i}页失败")
        print("\n")
    else:
        soup = BeautifulSoup(r.text, "html.parser")
        for box in soup.find_all(class_="quote"):
            Text = box.find(class_="text")
            Author = box.find(class_="author")
            Tag = box.find_all(class_="tag")
            names = []
            print(Text.text)
            for j in Tag:
                names.append(j.text)
            print("+".join(names))
            print(Author.text)
            w.writerow([Text.text,Author.text,"+".join(names)])
        print(f"第{i}页：{len(soup.find_all(class_="quote"))}")
        print("\n")
f.close()
