use proconio::input;

fn main() {
	input! {
    n: u32,
    y: u32
  };
  let y0=y/1000;
  for man in 0..n+1 {
    for go in 0..n+1-man {
      let sen = n-man-go;
      if y0 == man*10 + go*5 + sen {
        println!("{} {} {}", man, go, sen);
        return;
      }
    }
  }

  println!("{} {} {}", -1, -1, -1);
}
