def likes(names):
    res = ""
    match names:
        case []:
            res = "no one likes this"
        case [x]:
            res = f"{x} likes this"
        case [x, y]:
            res = f"{x} and {y} like this"
        case [x, y, z]:
            res = f"{x}, {y} and {z} like this"
        case [x, y, *rest]:
            res = f"{x}, {y} and {len(rest)} others like this"
    return res