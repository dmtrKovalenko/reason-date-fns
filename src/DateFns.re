open ReasonDateFnsCurryHelpers;

type date = Js.Date.t;

type locale;

[@bs.module "date-fns/fp/locale/af"] external afLocale: locale = "default";
[@bs.module "date-fns/fp/locale/ar-DZ"] external arDZLocale: locale = "default";
[@bs.module "date-fns/fp/locale/ar-SA"] external arSALocale: locale = "default";
[@bs.module "date-fns/fp/locale/ar"] external arLocale: locale = "default";
[@bs.module "date-fns/fp/locale/be"] external beLocale: locale = "default";
[@bs.module "date-fns/fp/locale/bg"] external bgLocale: locale = "default";
[@bs.module "date-fns/fp/locale/bn"] external bnLocale: locale = "default";
[@bs.module "date-fns/fp/locale/ca"] external caLocale: locale = "default";
[@bs.module "date-fns/fp/locale/cs"] external csLocale: locale = "default";
[@bs.module "date-fns/fp/locale/cy"] external cyLocale: locale = "default";
[@bs.module "date-fns/fp/locale/de"] external deLocale: locale = "default";
[@bs.module "date-fns/fp/locale/el"] external elLocale: locale = "default";
[@bs.module "date-fns/fp/locale/eo"] external eoLocale: locale = "default";
[@bs.module "date-fns/fp/locale/en"] external enLocale: locale = "default";
[@bs.module "date-fns/fp/locale/en-US"] external enUSLocale: locale = "default";
[@bs.module "date-fns/fp/locale/en-GB"] external enGBLocale: locale = "default";
[@bs.module "date-fns/fp/locale/en-CA"] external enCALocale: locale = "default";
[@bs.module "date-fns/fp/locale/es"] external esLocale: locale = "default";
[@bs.module "date-fns/fp/locale/et"] external etLocale: locale = "default";
[@bs.module "date-fns/fp/locale/fa-IR"] external faIRLocale: locale = "default";
[@bs.module "date-fns/fp/locale/fi"] external fiLocale: locale = "default";
[@bs.module "date-fns/fp/locale/fil"] external filLocale: locale = "default";
[@bs.module "date-fns/fp/locale/fr"] external frLocale: locale = "default";
[@bs.module "date-fns/fp/locale/gl"] external glLocale: locale = "default";
[@bs.module "date-fns/fp/locale/he"] external heLocale: locale = "default";
[@bs.module "date-fns/fp/locale/hr"] external hrLocale: locale = "default";
[@bs.module "date-fns/fp/locale/hu"] external huLocale: locale = "default";
[@bs.module "date-fns/fp/locale/id"] external idLocale: locale = "default";
[@bs.module "date-fns/fp/locale/is"] external isLocale: locale = "default";
[@bs.module "date-fns/fp/locale/it"] external itLocale: locale = "default";
[@bs.module "date-fns/fp/locale/ja"] external jaLocale: locale = "default";
[@bs.module "date-fns/fp/locale/ka"] external kaLocale: locale = "default";
[@bs.module "date-fns/fp/locale/ko"] external koLocale: locale = "default";
[@bs.module "date-fns/fp/locale/lt"] external ltLocale: locale = "default";
[@bs.module "date-fns/fp/locale/lv"] external lvLocale: locale = "default";
[@bs.module "date-fns/fp/locale/mk"] external mkLocale: locale = "default";
[@bs.module "date-fns/fp/locale/ms"] external msLocale: locale = "default";
[@bs.module "date-fns/fp/locale/nl"] external nlLocale: locale = "default";
[@bs.module "date-fns/fp/locale/pl"] external plLocale: locale = "default";
[@bs.module "date-fns/fp/locale/pt-Br"] external ptBrLocale: locale = "default";
[@bs.module "date-fns/fp/locale/pt"] external ptLocale: locale = "default";
[@bs.module "date-fns/fp/locale/ro"] external roLocale: locale = "default";
[@bs.module "date-fns/fp/locale/ru"] external ruLocale: locale = "default";
[@bs.module "date-fns/fp/locale/sk"] external skLocale: locale = "default";
[@bs.module "date-fns/fp/locale/sl"] external slLocale: locale = "default";
[@bs.module "date-fns/fp/locale/sr"] external srLocale: locale = "default";
[@bs.module "date-fns/fp/locale/sv"] external svLocale: locale = "default";
[@bs.module "date-fns/fp/locale/th"] external thLocale: locale = "default";
[@bs.module "date-fns/fp/locale/tr"] external trLocale: locale = "default";
[@bs.module "date-fns/fp/locale/ug"] external ugLocale: locale = "default";
[@bs.module "date-fns/fp/locale/uk"] external ukLocale: locale = "default";
[@bs.module "date-fns/fp/locale/vi"] external viLocale: locale = "default";
[@bs.module "date-fns/fp/locale/zh-CN"] external zhCNLocale: locale = "default";
[@bs.module "date-fns/fp/locale/zh-TW"] external zhTWLocale: locale = "default";


/******************/
/* Common helpers */
/******************/

[@bs.module "date-fns/fp/closestIndexTo"]
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

[@bs.module "date-fns/fp/formatDistance"]
external uncurried_formatDistance: (. date) => (. date) => string = "default";
let formatDistance = curry2(uncurried_formatDistance);

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