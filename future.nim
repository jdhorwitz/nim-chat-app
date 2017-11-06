import asyncdispatch, asyncfile

proc readFiles() {.async.} =
  var file = openAsync("test.txt", fmReadWrite)
  let data = await file.readAll()
  echo(data)
  await file.write("Hello!\n")
  file.close()

waitFor readFiles()
