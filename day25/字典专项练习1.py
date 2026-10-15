phone={'zab':'123','wxy':'234','zjx':'345'}
phone['zab']='124'
del phone['wxy']
for name,number in phone.items():
    print(f'\n{name}')
    print(number)
