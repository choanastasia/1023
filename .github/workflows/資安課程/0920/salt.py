# import crypt
import os
from hashlib import pbkdf2_hmac

mypassword = bytes(os.getenv('MY_PASSWORD'), 'utf-8')

salt = os.urandom(32)
hash = pbkdf2_hmac('sha256', mypassword, salt, 100000)    # Compliant

print(hash)
