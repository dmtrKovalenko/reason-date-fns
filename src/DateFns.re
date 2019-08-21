open Helpers;

type date = Js.Date.t;

type locale;

[@bs.module "date-fns/fp/locale/ru"] external ruLocale: locale = "default";
[@bs.module "date-fns/fp/locale/en"] external enLocale: locale = "default";

/******************/
/* Common helpers */
/******************/

[@bs.module "date-fns/fp/fp/closestIndexTo"]
external uncurried_closestIndexTo: (. array(date)) => (. date) => int =
  "default";

let closestIndexTo = curry2(uncurried_closestIndexTo);

[@bs.deriving abstract]
type formatOptions = {
  [@bs.optional]
  locale,
  [@bs.optional]
  weekStartsOn: int,
  [@bs.optional]
  firstWeekContainsDate: int,
};

[@bs.module "date-fns/fp/formatWithOptions"]
external uncurried_formatWithOptions:
  (. formatOptions) => (. string) => (. date) => string =
  "default";

let formatWithOptions = curry3(uncurried_formatWithOptions);

[@bs.module "date-fns/fp/format"]
external uncurried_format: (. string) => (. date) => string = "default";
let format = curry2(uncurried_format);

[@bs.module "date-fns/fp/closestTo"]
external uncurried_closestTo: (. array(date)) => (. date) => date = "default";
let closestTo = curry2(uncurried_closestTo);

[@bs.module "date-fns/fp/compareAsc"]
external uncurried_compareAsc: (. date) => (. date) => int = "default";
let compareAsc = curry2(uncurried_compareAsc);

[@bs.module "date-fns/fp/compareDesc"]
external uncurried_compareDesc: (. date) => (. date) => int = "default";
let compareDesc = curry2(uncurried_compareDesc);

[@bs.module "date-fns/fp/fomatDistance"]
external uncurried_fomatDistance: (. date) => (. date) => string = "default";
let fomatDistance = curry2(uncurried_fomatDistance);

[@bs.module "date-fns/fp/formatRelative"]
external uncurried_formatRelative: (. date) => (. date) => string = "default";
let formatRelative = curry2(uncurried_formatRelative);

[@bs.module "date-fns/fp/isAfter"]
external uncurried_isAfter: (. date) => (. date) => bool = "default";
let isAfter = curry2(uncurried_isAfter);

[@bs.module "date-fns/fp/isBefore"]
external uncurried_isBefore: (. date) => (. date) => bool = "default";
let isBefore = curry2(uncurried_isBefore);

[@bs.module "date-fns/fp/isDate"] external isDate: date => bool = "default";

[@bs.module "date-fns/fp/isValid"] external isVaid: date => bool = "default";

[@bs.module "date-fns/fp/isEqual"]
external uncurried_isEqual: (. date) => (. date) => bool = "default";
let isEqual = curry2(uncurried_isEqual);

[@bs.module "date-fns/fp/lightFormat"]
external uncurried_lightFormat: (. string) => (. date) => string = "default";
let lightFormat = curry2(uncurried_lightFormat);

[@bs.module "date-fns/fp/max"] external max: array(date) => date = "default";

[@bs.module "date-fns/fp/min"] external min: array(date) => date = "default";

[@bs.module "date-fns/fp/parse"]
external uncurried_parse: (. date) => (. string) => (. string) => date =
  "default";
let parse = curry3(uncurried_parse);

[@bs.module "date-fns/fp/parseISO"] external parseISO: string => date = "default";

[@bs.module "date-fns/fp/toDate"] external toDate: int => date = "default";

/***************/
/* Day helpers */
/***************/

[@bs.module "date-fns/fp/addBusinessDays"]
external uncurried_addBusinessDays: (. int) => (. date) => date = "default";
let addBusinessDays = curry2(uncurried_addBusinessDays);

[@bs.module "date-fns/fp/addDays"]
external uncurried_addDays: (. int) => (. date) => date = "default";
let addDays = curry2(uncurried_addDays);

[@bs.module "date-fns/fp/differenceInBusinessDays"]
external uncurried_differenceInBusinessDays: (. date) => (. date) => int =
  "default";
let differenceInBusinessDays = curry2(uncurried_differenceInBusinessDays);

[@bs.module "date-fns/fp/differenceInCalendarDays"]
external uncurried_differenceInCalendarDays: (. date) => (. date) => int =
  "default";
let differenceInCalendarDays = curry2(uncurried_differenceInCalendarDays);

[@bs.module "date-fns/fp/differenceInDays"]
external uncurried_differenceInDays: (. date) => (. date) => int = "default";
let differenceInDays = curry2(uncurried_differenceInDays);

[@bs.module "date-fns/fp/endOfDay"] external endOfDay: date => date = "default";
[@bs.module "date-fns/fp/startOfDay"]
external startOfDay: date => date = "default";
[@bs.module "date-fns/fp/getDate"] external getDate: date => int = "default";
[@bs.module "date-fns/fp/getDayOfYear"]
external getDayOfYear: date => int = "default";

[@bs.module "date-fns/fp/isSameDay"]
external uncurried_isSameDay: (. date) => (. date) => bool = "default";
let isSameDay = curry2(uncurried_isSameDay);

[@bs.module "date-fns/fp/setDay"]
external uncurried_setDay: (. int) => (. date) => date = "default";
let setDay = curry2(uncurried_setDay);

[@bs.module "date-fns/fp/setDayOfYear"]
external uncurried_setDayOfYear: (. int) => (. date) => date = "default";
let setDayOfYear = curry2(uncurried_setDayOfYear);

[@bs.module "date-fns/fp/subDays"]
external uncurried_subDays: (. int) => (. date) => date = "default";
let subDays = curry2(uncurried_subDays);