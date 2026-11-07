import sqlite3
conn = sqlite3.connect("quotes.db")
cur = conn.cursor()
cur.execute("SELECT text,author FROM quotes LIMIT 5")
for row in cur.fetchall():
    print(row)
print("\n")
cur.execute("SELECT text,author FROM quotes WHERE author = ?",
            ("Albert Einstein",))

for row in cur.fetchall():
    print(row)
print("\n")
cur.execute("""
    SELECT author,COUNT() 
    from quotes
    GROUP BY author
    ORDER BY COUNT() DESC
    LIMIT 5
""")
#1、我要两列。第一列是作者名，第二列是这个作者有几条。
#2、从 quotes 这张表里来。
#3、按作者把 50 行分成几堆，同一个作者进同一堆。
#4、按每堆的条数从大到小排。
#5、只留前 5 堆。
for row in cur.fetchall():
    print(row)
cur.execute("""
    SELECT tag,COUNT() 
    from tags
    GROUP BY tag
    ORDER BY COUNT() DESC
    LIMIT 5
""")
print("\n")
for row in cur.fetchall():
    print(row)
cur.execute("""
    SELECT q.author, t.tag
    FROM quotes q 
    JOIN tags t 
    ON q.id = t.quote_id
    LIMIT 10""")
print("\n")
for row in cur.fetchall():
    print(row)
conn.close()
