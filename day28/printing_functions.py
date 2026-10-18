def function(unprinted_designs,completed_models):
    while unprinted_designs:
        current_design=unprinted_designs.pop()
        print(f"Printing model；{current_design}")
        completed_models.append(current_design)
