open Js;

Date.make() |> Js.log;

Date.make() |> DateFns.isBefore(Date.make()) |> Js.log;

DateFns.max([|Js.Date.make(), Js.Date.make()|]) |> Js.log;

Js.Date.make()
|> DateFns.addDays(2)
|> DateFns.addDays(-2)
|> DateFns.closestTo([|
     DateFns.parseISO("2019-08-21T13:00:03.058Z"),
     Js.Date.make(),
   |])
|> DateFns.lightFormat("yyyy-MM-dd");

Js.Date.make()
|> DateFns.formatWithOptions(
     DateFns.formatOptions(~locale=DateFns.Locales.ru, ()),
     "yyyy-MM-dd",
   );

Js.Date.make()
|> DateFns.addMinutes(10.)
|> DateFns.addSeconds(10.)
|> DateFns.addMilliseconds(1000)
|> Js.log;

Js.Date.make()
|> DateFns.addDays(1)
|> DateFns.startOfDay
|> DateFns.setHours(7.)
|> Js.log2("test");