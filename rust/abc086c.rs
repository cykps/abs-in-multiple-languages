use proconio::input;

fn main() {
	input! {
    n: i64,
    p: [[i64; 3]; n]
  };

  let mut cp = vec![0;3];
  for np in p {
    let dt = np[0]-cp[0];
    let dx = (np[1]-cp[1]).abs();
    let dy = (np[2]-cp[2]).abs();
    let tmp:i64 = dt-(dx+dy);
    if tmp<0 || tmp%2==1 {
      println!("No");
      return;
    }
    cp = np;
  }
  println!("Yes");
}
