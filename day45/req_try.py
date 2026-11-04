import requests
r = requests.get("https://quotes.toscrape.com/", timeout=5)
print(r.status_code, len(r.text))
f = open("D:/zab/day45/quotes.html", "w", encoding="utf-8")
f.write(r.text)
f2 = open("D:/zab/day45/quotes.html", "r", encoding="utf-8")
content = f2.read()
if len(content)==len(r.text):
    print(f'对账通过，{len(r.text)}')
else:
    print(f'对账失败，{len(r.text)} {len(content)}')
f.close()
f2.close()
print("写完了")
