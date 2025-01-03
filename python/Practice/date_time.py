#Print current time and date 

import datetime

now = datetime.datetime.now()

print("Current date and time is: ")
print(now.strftime("%y-%m-%d %H:%M:%s"))