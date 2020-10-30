import datetime
import pandas as pd
import os

def workdays(d, end, excluded=(6, 7)):
    days = []
    while d.date() <= end.date():
        if d.isoweekday() not in excluded:
            days.append(d)
        d += datetime.timedelta(days=1)
    return days
date_array = []

def strip(days):
  for i in days:
    date_time = i.strftime("%d%m%Y")
    date_array.append(date_time)

print(date_array)

def scraper():
  for date in date_array:
    print(date)
    try:
      url = "https://www1.nseindia.com/archives/equities/mto/MTO_"+date+".DAT"
      df_lst = pd.read_csv(url, header=4)
    except Exception as err:
      print("no file " + date)
    df_lst.head()
    df_lst.to_csv("date/file_"+date+".csv")

#Change the start and end date
days = workdays(datetime.datetime(2018, 1, 21),
               datetime.datetime(2019, 1, 30))
strip(days)
scraper()