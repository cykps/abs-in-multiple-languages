use proconio::input;
const NDM:usize = 5;
const NDR:usize = 7;
const NEE:usize = 5;
const NER:usize = 6;

fn main() {
	input! {
    s: String
  };
  let dm = "maerd";//dream
  let dr = "remaerd";//dreamer
  let ee = "esare";//erase
  let er = "resare";//eraser
  let s1:String = s.chars().rev().collect();
  
  let mut p = 0;
  while s1.len() > p {
    if s1.len()-p>=NDM && &s1[p..p+NDM] == dm {
      p += NDM;
    } else if s1.len()-p>=NDR && &s1[p..p+NDR] == dr {
      p += NDR;
    } else if s1.len()-p>=NEE && &s1[p..p+NEE] == ee {
      p += NEE;
    } else if s1.len()-p>=NER && &s1[p..p+NER] == er {
      p += NER;
    } else {
      println!("NO");
      return;
    }
  }

  println!("YES");
}
