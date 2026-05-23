from datetime import datetime, timezone, timedelta

KST = timezone(timedelta(hours = 9))
Seoul = datetime.now(KST)

print(Seoul.strftime('%Y-%m-%d'))
