#!/bin/bash

# التحقق من تمرير العنوان URL كمعامل
if [ -z "$1" ]; then
  echo "Usage: $0 <URL>"
  exit 1
fi

# تعيين العنوان URL إلى متغير
URL="$1"

# إرسال طلب GET باستخدام curl
response=$(curl -s -w "%{http_code}" "$URL")

# استخراج رمز الحالة ومحتوى الاستجابة
http_code=${response: -3}
body=${response:0: -3}

# عرض محتوى الاستجابة إذا كان رمز الحالة 200
if [ "$http_code" -eq 200 ]; then
  echo "$body"
else
  echo "HTTP status code: $http_code"
fi