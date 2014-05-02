from functools import wraps

def cache(func):
    _cache = {}

    @wraps(func)
    def inner(*args):
        if len(args) == 0:
            key = None
        elif len(args) == 1:
            key = args[0]
        else:
            key = args

        if key in _cache:
            return _cache[key]

        retval = func(*args)
        _cache[key] = retval

        return retval

    return inner

