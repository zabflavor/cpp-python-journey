#练习8-3：T恤
def make_shirt(size,picture):
    print(f"The shirt is {size}.The picture is {picture}.")
make_shirt("xxl","flower")
make_shirt(picture="grass",size="xl")
#练习8-4：大号T恤
def make_shirt1(size,picture="I love Python."):
    print(f"The shirt is {size}.The picture is {picture}.")
make_shirt1("xxl","flower")
make_shirt1("xl")
make_shirt1("xxxxl")
#练习8-5：城市
def describe_city(city,country):
    print(f"{city.title()} is in {country.title()}.")
describe_city("wuhan","china")